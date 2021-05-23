/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVTArchiverBasedStoreRoot : NSObject

{
    NSArray *_domains;
    NSArray *_records;
}

@property (copy, nonatomic, readonly) NSArray *domains;
@property (copy, nonatomic, readonly) NSArray *records;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomains:(id)arg1 records:(id)arg2;

@end
