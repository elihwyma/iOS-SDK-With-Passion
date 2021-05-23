/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NUSizer : NSObject

{
    _Bool _flexible;
    _Bool _alwaysIntegral;
    NSString *_desc;
    CDUnknownBlockType _sizerBlock;
}

@property (copy, nonatomic, readonly) NSString *desc;
@property (copy, nonatomic, readonly) CDUnknownBlockType sizerBlock;
@property (nonatomic, readonly) _Bool flexible;
@property (nonatomic, readonly) _Bool alwaysIntegral;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDescription:(id)arg1 flexible:(_Bool)arg2 sizerBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)frameInBounds:(struct CGRect)arg1 cursor:(double)arg2 options:(struct NULayoutOptions)arg3 layoutContext:(id)arg4;
- (id)initWithDescription:(id)arg1 sizerBlock:(CDUnknownBlockType)arg2;

@end
