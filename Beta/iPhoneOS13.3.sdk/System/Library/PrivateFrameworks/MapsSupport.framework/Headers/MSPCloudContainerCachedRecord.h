/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class CKRecord, NSData;

__attribute__((visibility("hidden")))
@interface MSPCloudContainerCachedRecord : NSObject

{
    CKRecord *_record;
    NSData *_contentsHash;
    NSData *_positionHash;
}

@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) NSData *contentsHash;
@property (retain, nonatomic) NSData *positionHash;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (_Bool)isEqualToCloudRecord:(id)arg1;

@end
