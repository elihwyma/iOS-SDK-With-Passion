/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSString;

@interface BYLocaleCountry : NSObject

{
    NSString *_name;
    NSString *_code;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *code;

+ (CDUnknownBlockType)comparatorForLocale:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
