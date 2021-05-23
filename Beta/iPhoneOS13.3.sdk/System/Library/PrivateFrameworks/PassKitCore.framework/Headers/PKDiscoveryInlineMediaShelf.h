/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDiscoveryShelf.h>

@class NSString, PKDiscoveryMedia;

@interface PKDiscoveryInlineMediaShelf : PKDiscoveryShelf

{
    PKDiscoveryMedia *_media;
    NSString *_captionKey;
    long long _displayType;
    NSString *_localizedCaption;
}

@property (retain, nonatomic) NSString *localizedCaption;
@property (nonatomic, readonly) PKDiscoveryMedia *media;
@property (nonatomic, readonly) NSString *captionKey;
@property (nonatomic, readonly) long long displayType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;

@end
