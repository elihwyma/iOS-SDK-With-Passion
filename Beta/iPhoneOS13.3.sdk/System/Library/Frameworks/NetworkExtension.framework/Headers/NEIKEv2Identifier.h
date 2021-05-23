/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface NEIKEv2Identifier : NSObject

{
    NSData *_identifierData;
}

@property (readonly) unsigned long long identifierType;
@property (retain) NSData *identifierData;
@property (readonly) NSString *stringValue;

+ (id)copyTypeDescription;
+ (id)createIdentifierWithType:(unsigned long long)arg1 data:(id)arg2 zone:(struct _NSZone *)arg3;
+ (id)createIdentifierWithType:(unsigned long long)arg1 data:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end
