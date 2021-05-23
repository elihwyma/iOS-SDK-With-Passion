/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface ICInAppMessageMetadataEntry : NSObject <Swift>

{
    NSMutableDictionary *_metadataValues;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)metadataValueForKey:(id)arg1;
- (id)allMetadataValues;

@end
