/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBWidgetViewControllerDelegate <NSObject>
@optional
-(int)activeLayoutModeForWidget:(id)widget;
-(BOOL)widgetShouldAttemptReconnectionAfterUnanticipatedDisconnection:(id)widget;
-(BOOL)shouldRequestWidgetRemoteViewControllers;
-(void)contentAvailabilityDidChangeForWidget:(id)contentAvailability;
-(id)widget:(id)widget didUpdatePreferredHeight:(float)height completion:(id)completion;
-(void)widget:(id)widget requestsLaunchOfURL:(id)url;
-(void)widget:(id)widget requestsPresentationOfViewController:(id)viewController presentationStyle:(int)style context:(id)context completion:(id)completion;
-(void)remoteViewControllerDidConnectForWidget:(id)remoteViewController;
@end
