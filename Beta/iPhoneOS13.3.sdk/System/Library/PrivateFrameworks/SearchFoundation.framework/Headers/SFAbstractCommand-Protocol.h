/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, SFCommandValue;

@protocol SFAbstractCommand <Swift>

@property (nonatomic) int type;
@property (retain, nonatomic) SFCommandValue *value;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
