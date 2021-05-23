/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFTrelloObject.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface WFTrelloCard : WFTrelloObject

{
    NSString *_itemDescription;
    NSNumber *_creationPosition;
    NSDate *_dueDate;
    NSURL *_URL;
}

@property (nonatomic, readonly) NSString *itemDescription;
@property (nonatomic, readonly) NSNumber *creationPosition;
@property (nonatomic, readonly) NSDate *dueDate;
@property (nonatomic, readonly) NSURL *URL;

+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dueDateJSONTransformer;

@end
