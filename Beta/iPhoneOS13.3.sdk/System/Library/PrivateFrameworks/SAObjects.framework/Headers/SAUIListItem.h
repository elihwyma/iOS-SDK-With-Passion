/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@protocol SAAceSerializable;

@interface SAUIListItem : SAAceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *imageType;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *labelValue;
@property (retain, nonatomic) id <SAAceSerializable> object;
@property (copy, nonatomic) NSString *selectionResponse;
@property (copy, nonatomic) NSString *selectionText;
@property (copy, nonatomic) NSString *speakableSelectionResponse;
@property (copy, nonatomic) NSString *title;

+ (id)listItem;
+ (id)listItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
