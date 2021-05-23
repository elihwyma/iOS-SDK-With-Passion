/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EditScriptRangedAtom : NSObject

{
    NSString *_replacementText;
    struct _NSRange _editRange;
}

@property (nonatomic) struct _NSRange editRange;
@property (retain, nonatomic) NSString *replacementText;

+ (id)atomWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;

- (id)description;
- (id)initWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;

@end
