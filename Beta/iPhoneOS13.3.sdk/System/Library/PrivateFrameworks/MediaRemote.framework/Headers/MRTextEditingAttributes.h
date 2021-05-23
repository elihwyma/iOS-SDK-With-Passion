/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MRTextEditingAttributes : NSObject

{
    NSString *_title;
    NSString *_prompt;
    struct _MRTextInputTraits _inputTraits;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *prompt;
@property (nonatomic, readonly) struct _MRTextInputTraits inputTraits;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)initWithTitle:(id)arg1 prompt:(id)arg2;

@end
