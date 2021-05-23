/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFImage <Swift>

@property (copy) NSData *imageData;
@property (nonatomic) _Bool isTemplate;
@property (nonatomic) _Bool shouldCropToCircle;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize size;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *keyColor;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int source;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
