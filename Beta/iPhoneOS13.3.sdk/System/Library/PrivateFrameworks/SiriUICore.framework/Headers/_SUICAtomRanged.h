/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _SUICAtomRanged : NSObject

{
    NSString *_replacementText;
    struct _NSRange _editRange;
}

@property (nonatomic) struct _NSRange editRange;
@property (retain, nonatomic) NSString *replacementText;

+ (id)atomWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (_Bool)isEqualToEditScriptAtomRanged:(id)arg1;

@end
