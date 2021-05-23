/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface SVInteractionContext : NSObject

{
    UIView *_sourceView;
    struct CGRect _sourceRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *sourceView;
@property (nonatomic, readonly) struct CGRect sourceRect;

- (id)initWithSourceView:(id)arg1 sourceRect:(struct CGRect)arg2;

@end
