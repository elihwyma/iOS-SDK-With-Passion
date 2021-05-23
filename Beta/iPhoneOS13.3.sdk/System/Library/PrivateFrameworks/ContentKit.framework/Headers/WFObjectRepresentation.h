/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFRepresentation.h>

@class NSString, WFObjectType;

@interface WFObjectRepresentation : WFRepresentation

{
    NSString *_wfName;
    id _object;
}

@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) NSString *specifiedName;
@property (nonatomic, readonly) NSString *wfName;
@property (nonatomic, readonly) WFObjectType *wfType;

+ (_Bool)supportsSecureCoding;
+ (id)object:(id)arg1;
+ (id)object:(id)arg1 named:(id)arg2;
+ (id)objects:(id)arg1;
+ (id)objects:(id)arg1 named:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;
- (id)initWithObject:(id)arg1 named:(id)arg2;
- (_Bool)isEncodable;

@end
