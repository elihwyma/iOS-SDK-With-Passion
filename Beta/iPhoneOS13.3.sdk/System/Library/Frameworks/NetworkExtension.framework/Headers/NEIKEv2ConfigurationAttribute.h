/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NEIKEv2ConfigurationAttribute : NSObject

{
    NSString *_customAttributeName;
}

@property (retain) NSString *customAttributeName;
@property (readonly) unsigned long long attributeType;
@property (readonly) unsigned long long valueType;

+ (id)copyTypeDescription;

- (id)attributeName;
- (id)initEmptyRequest;

@end
