/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, SFImage;

@protocol SFButton <Swift>

@property (retain, nonatomic) SFImage *image;
@property (retain, nonatomic) SFImage *selectedImage;
@property (nonatomic) _Bool isSelected;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
