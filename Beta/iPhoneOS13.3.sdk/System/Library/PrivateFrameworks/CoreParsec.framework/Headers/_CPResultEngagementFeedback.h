/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, _CPSearchResultForFeedback;

@interface _CPResultEngagementFeedback : PBCodable <Swift>

{
    _Bool _actionEngaged;
    _Bool _matchesUnengagedSuggestion;
    int _triggerEvent;
    int _destination;
    int _actionTarget;
    unsigned long long _timestamp;
    _CPSearchResultForFeedback *_result;
    NSString *_titleText;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool actionEngaged;
@property (nonatomic) int triggerEvent;
@property (nonatomic) int destination;
@property (nonatomic) int actionTarget;
@property (retain, nonatomic) _CPSearchResultForFeedback *result;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) _Bool matchesUnengagedSuggestion;
@property (nonatomic, readonly) NSData *jsonData;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)actionDestinationFromResult:(id)arg1 actionEngaged:(_Bool)arg2 destination:(int)arg3;

@end
