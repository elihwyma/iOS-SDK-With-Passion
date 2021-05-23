/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSTranslationInformation : NSObject

{
    NSString *_urlString;
    NSString *_sourceLanguage;
    NSString *_targetLanguage;
}

@property (copy, nonatomic, readonly) NSString *urlString;
@property (copy, nonatomic, readonly) NSString *sourceLanguage;
@property (copy, nonatomic, readonly) NSString *targetLanguage;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithURLString:(id)arg1 sourceLanguage:(id)arg2 targetLanguage:(id)arg3;

@end
