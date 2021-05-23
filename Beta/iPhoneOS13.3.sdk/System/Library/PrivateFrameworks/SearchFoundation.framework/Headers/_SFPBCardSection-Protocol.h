/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBCard, _SFPBCardSectionValue, _SFPBUserReportRequest;

@protocol _SFPBCardSection <Swift>

@property (nonatomic) int type;
@property (retain, nonatomic) _SFPBCardSectionValue *value;
@property (retain, nonatomic) _SFPBCard *nextCard;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) _SFPBUserReportRequest *userReportRequest;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addCommands: /* Error: Ran out of types for this method. */;
- (unsigned short)addParameterKeyPaths: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCommands;
- (unsigned short)commandsCount;
- (unsigned short)commandsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearParameterKeyPaths;
- (unsigned short)parameterKeyPathsCount;
- (unsigned short)parameterKeyPathsAtIndex: /* Error: Ran out of types for this method. */;

@end
