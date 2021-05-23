/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage, SFPunchout;

@protocol SFAppLink <Swift>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SFPunchout *appPunchout;
@property (retain, nonatomic) SFImage *image;
@property (nonatomic) int imageAlign;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
