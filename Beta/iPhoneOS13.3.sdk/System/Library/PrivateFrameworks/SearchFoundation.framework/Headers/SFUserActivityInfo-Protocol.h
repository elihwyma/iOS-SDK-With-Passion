/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@protocol SFUserActivityInfo <Swift>

@property (nonatomic) int valueType;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSURL *urlValue;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
