/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface QLUTIAnalyzer : NSObject

{
    NSString *_contentType;
}

@property (readonly) NSString *contentType;

+ (_Bool)supportsSecureCoding;
+ (id)UTIForURL:(id)arg1;
+ (_Bool)isTypeAudioOnly:(id)arg1;
+ (id)knownExtensions;
+ (id)privateUTIFromFileName:(id)arg1;
+ (id)removeSpacesFromString:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (_Bool)isAudioOnly;
- (id)initWithContentType:(id)arg1;

@end
