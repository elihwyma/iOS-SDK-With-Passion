/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class CKRecord, NSNumber, NSString;

@interface FCTagSettingsEntry : NSObject

{
    _Bool _webAccessOptIn;
    NSString *_identifier;
    NSString *_tagID;
    NSNumber *_fontMultiplier;
    NSNumber *_fontMultiplierMacOS;
    NSNumber *_contentScale;
    NSNumber *_contentScaleMacOS;
    NSString *_accessToken;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *tagID;
@property (copy, nonatomic, readonly) NSNumber *fontMultiplier;
@property (copy, nonatomic, readonly) NSNumber *fontMultiplierMacOS;
@property (copy, nonatomic, readonly) NSNumber *contentScale;
@property (copy, nonatomic, readonly) NSNumber *contentScaleMacOS;
@property (copy, nonatomic, readonly) NSString *accessToken;
@property (nonatomic, readonly) _Bool webAccessOptIn;
@property (nonatomic, readonly) CKRecord *asCKRecord;

- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 fontMultiplier:(id)arg3 fontMultiplierMacOS:(id)arg4 contentScale:(id)arg5 contentScaleMacOS:(id)arg6 accessToken:(id)arg7 webAccessOptIn:(_Bool)arg8;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;

@end
