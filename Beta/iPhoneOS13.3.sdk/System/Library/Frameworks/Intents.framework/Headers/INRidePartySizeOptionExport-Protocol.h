/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INPriceRange, NSString;

@protocol INRidePartySizeOptionExport <Swift>

@property (nonatomic) struct _NSRange partySizeRange;
@property (copy, nonatomic) NSString *sizeDescription;
@property (copy, nonatomic) INPriceRange *priceRange;

- (unsigned short)init;

@end
