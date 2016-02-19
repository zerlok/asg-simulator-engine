#ifndef __CMD_MOVE_NODE_H__
#define __CMD_MOVE_NODE_H__


#include "common/point.h"
#include "core/coretypes.h"
#include "abstract_node.h"


class CmdMoveNode : public AbstractNode
{
	public:
		CmdMoveNode(const Point& direction = Point::zero);
		CmdMoveNode(const Arguments& args);
		CmdMoveNode(const CmdMoveNode& node);
		CmdMoveNode(CmdMoveNode&& node);
		~CmdMoveNode();

		const Battlefield& execute();

	private:
		Point _direction;
};


// __CMD_MOVE_NODE_H__
#endif
