/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface NSFileProviderItemVersion : NSObject

{
    NSData *_contentVersion;
    NSData *_metadataVersion;
}

@property (nonatomic, readonly) NSData *contentVersion;
@property (nonatomic, readonly) NSData *metadataVersion;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentVersion:(id)arg1 metadataVersion:(id)arg2;

@end
