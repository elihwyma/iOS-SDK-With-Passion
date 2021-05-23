/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBSearchForMessagesIntentResponse : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_messages;
    NSArray *_searchResults;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *messages;
@property (nonatomic, readonly) unsigned long long messagesCount;
@property (copy, nonatomic) NSArray *searchResults;
@property (nonatomic, readonly) unsigned long long searchResultsCount;

+ (_Bool)supportsSecureCoding;
+ (Class)messagesType;
+ (Class)searchResultsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearMessages;
- (void)addMessages:(id)arg1;
- (id)messagesAtIndex:(unsigned long long)arg1;
- (void)clearSearchResults;
- (void)addSearchResults:(id)arg1;
- (id)searchResultsAtIndex:(unsigned long long)arg1;

@end
