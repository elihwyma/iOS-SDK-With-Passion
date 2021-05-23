/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSString;

@interface WFFileSize : NSObject <Swift>

{
    long long _byteCount;
}

@property (nonatomic, readonly) long long byteCount;
@property (nonatomic, readonly) NSString *formattedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (_Bool)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithByteCount:(long long)arg1;
- (id)wfSerializedRepresentation;

@end
