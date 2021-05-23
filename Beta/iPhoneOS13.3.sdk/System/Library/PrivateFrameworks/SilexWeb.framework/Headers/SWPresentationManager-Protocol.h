/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <SilexWeb/Swift-Protocol.h>

@protocol SWPresentationManager <Swift>

@property (nonatomic) unsigned long long presentationState;
@property (nonatomic, readonly) double height;
@property (copy, nonatomic, setter=onLoad:) CDUnknownBlockType loadBlock;
@property (copy, nonatomic, setter=onPresentable:) CDUnknownBlockType presentableBlock;

- (unsigned short)refresh;

@end
