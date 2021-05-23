/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@interface SFCard : NSObject <Swift>

{
    struct {
        unsigned int type:1;
        unsigned int source:1;
        unsigned int queryId:1;
        unsigned int flexibleSectionOrder:1;
    } _has;
    _Bool _flexibleSectionOrder;
    int _type;
    int _source;
    NSString *_title;
    NSArray *_cardSections;
    NSData *_intentMessageData;
    NSString *_intentMessageName;
    NSData *_intentResponseMessageData;
    NSString *_intentResponseMessageName;
    NSArray *_dismissalCommands;
    NSString *_cardId;
    NSString *_contextReferenceIdentifier;
    NSURL *_urlValue;
    NSData *_entityIdentifier;
    NSString *_resultIdentifier;
    unsigned long long _queryId;
    NSString *_fbr;
    NSArray *_entityProtobufMessages;
    NSData *_originalCardData;
}

@property (copy, nonatomic, getter=_originalCardData, setter=_setOriginalCardData:) NSData *originalCardData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (copy) NSArray *cardSections;
@property (copy, nonatomic) NSData *intentMessageData;
@property (copy, nonatomic) NSString *intentMessageName;
@property (copy, nonatomic) NSData *intentResponseMessageData;
@property (copy, nonatomic) NSString *intentResponseMessageName;
@property (copy, nonatomic) NSArray *dismissalCommands;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *contextReferenceIdentifier;
@property (copy, nonatomic) NSURL *urlValue;
@property (nonatomic) int source;
@property (copy, nonatomic) NSData *entityIdentifier;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *fbr;
@property (nonatomic) _Bool flexibleSectionOrder;
@property (copy, nonatomic) NSArray *entityProtobufMessages;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasSource;
- (_Bool)hasType;
- (id)initWithProtobuf:(id)arg1;
- (void)loadCardSectionsWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;
- (void)loadCardSectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasQueryId;
- (_Bool)hasFlexibleSectionOrder;
- (void)recursiveSetQueryId:(unsigned long long)arg1;

@end
