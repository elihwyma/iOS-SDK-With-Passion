/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSOpenSearchURLTemplateParameter : NSObject

{
    _Bool _optional;
    NSString *_name;
    NSString *_prefix;
    struct _NSRange _range;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *prefix;
@property (nonatomic) struct _NSRange range;
@property (nonatomic, getter=isOptional) _Bool optional;

@end
