/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@class NSString;

@protocol NUPage <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool allowNeighboringAdvertising;

- (unsigned short)viewController;
- (unsigned short)prepare;
- (unsigned short)unprepare;
- (unsigned short)activityProvider: /* Error: Ran out of types for this method. */;

@end
