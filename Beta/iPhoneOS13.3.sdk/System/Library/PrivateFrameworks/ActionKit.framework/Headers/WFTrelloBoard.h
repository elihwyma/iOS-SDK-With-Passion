/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFTrelloObject.h>

@class NSString, NSURL;

@interface WFTrelloBoard : WFTrelloObject

{
    _Bool _closed;
    NSString *_itemDescription;
    NSURL *_URL;
}

@property (nonatomic, readonly) NSString *itemDescription;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) _Bool closed;

+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)closedJSONTransformer;

@end
