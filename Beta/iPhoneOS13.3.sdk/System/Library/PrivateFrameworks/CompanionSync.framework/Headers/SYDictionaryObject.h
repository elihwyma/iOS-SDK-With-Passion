/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface SYDictionaryObject : NSObject

{
    NSDictionary *_properties;
}

@property (retain, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (id)syncId;

@end
