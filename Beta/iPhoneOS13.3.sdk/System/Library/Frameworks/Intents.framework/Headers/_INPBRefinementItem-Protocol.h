/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBSelectionItem;

@protocol _INPBRefinementItem <Swift>

@property (retain, nonatomic) _INPBSelectionItem *item;
@property (nonatomic, readonly) _Bool hasItem;
@property (copy, nonatomic) NSString *subKeyPath;
@property (nonatomic, readonly) _Bool hasSubKeyPath;

@end
