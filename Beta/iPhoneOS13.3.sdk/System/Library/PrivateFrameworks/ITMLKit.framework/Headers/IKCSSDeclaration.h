/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IKCSSDeclaration : NSObject

{
    _Bool _important;
    unsigned long long _type;
    NSString *_name;
    NSString *_aliasedName;
    struct _NSRange _range;
    struct _NSRange _nameRange;
    struct _NSRange _valueRange;
}

@property unsigned long long type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *aliasedName;
@property _Bool important;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic) struct _NSRange range;
@property (nonatomic) struct _NSRange nameRange;
@property (nonatomic) struct _NSRange valueRange;

+ (id)typeString:(unsigned long long)arg1;

- (id)description;

@end
