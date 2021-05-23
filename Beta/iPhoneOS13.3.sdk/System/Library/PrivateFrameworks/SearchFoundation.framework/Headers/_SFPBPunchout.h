/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBUserActivityData;

@interface _SFPBPunchout : PBCodable <Swift>

{
    _Bool _isRunnableInBackground;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_label;
    NSArray *_urls;
    _SFPBUserActivityData *_userActivityData;
    NSString *_actionTarget;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *urls;
@property (retain, nonatomic) _SFPBUserActivityData *userActivityData;
@property (copy, nonatomic) NSString *actionTarget;
@property (nonatomic) _Bool isRunnableInBackground;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)urlsCount;
- (void)clearUrls;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addUrls:(id)arg1;
- (id)urlsAtIndex:(unsigned long long)arg1;

@end
