/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFImageOption <Swift>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSDictionary *options;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
