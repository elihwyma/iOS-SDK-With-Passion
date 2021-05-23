/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSString, WFType;

@interface WFRepresentation : NSObject <Swift>

@property (nonatomic, readonly, getter=isEncodable) _Bool encodable;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (nonatomic, readonly) WFType *wfType;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithName:(id)arg1;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;

@end
