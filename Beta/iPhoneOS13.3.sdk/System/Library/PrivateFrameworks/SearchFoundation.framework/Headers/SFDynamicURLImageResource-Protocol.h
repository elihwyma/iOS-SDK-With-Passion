/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFDynamicURLImageResource <Swift>

@property (nonatomic) double pixelWidth;
@property (nonatomic) double pixelHeight;
@property (copy, nonatomic) NSString *formatURL;
@property (nonatomic) _Bool supportsResizing;
@property (copy, nonatomic) NSArray *imageOptions;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
