/*
 Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import <AXRuntime/Swift-Protocol.h>

@class AXElementGroup, MISSING_TYPE;

@protocol AXGroupable <Swift>

@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic) AXElementGroup *parentGroup;

- (MISSING_TYPE *)isGroup;
- (MISSING_TYPE *)highestAncestorGroup;
- (MISSING_TYPE *)keyboardContainer;

@end
