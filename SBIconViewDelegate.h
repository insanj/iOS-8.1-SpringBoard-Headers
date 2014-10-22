/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBIconViewDelegate <NSObject>
@optional
-(float)iconLabelWidth;
-(BOOL)iconViewDisplaysCloseBox:(id)box;
-(BOOL)iconViewDisplaysBadges:(id)badges;
-(void)iconCloseBoxTapped:(id)tapped;
-(void)icon:(id)icon openFolder:(id)folder animated:(BOOL)animated;
-(BOOL)icon:(id)icon canReceiveGrabbedIcon:(id)icon2;
-(void)iconTapped:(id)tapped;
-(BOOL)iconShouldAllowTap:(id)icon;
-(void)icon:(id)icon touchEnded:(BOOL)ended;
-(void)icon:(id)icon touchMoved:(id)moved;
-(void)iconTouchBegan:(id)began;
-(void)iconHandleLongPress:(id)press;
@end
