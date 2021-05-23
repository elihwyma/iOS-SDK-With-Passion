/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNPostalAddressFormattingSpecification : NSObject

{
    NSArray *_displayFieldArrangement;
    NSArray *_editingFieldArrangement;
    NSDictionary *_fieldLabelMap;
}

@property (nonatomic, readonly) NSDictionary *fieldLabelMap;
@property (nonatomic, readonly) NSArray *displayFieldArrangement;
@property (nonatomic, readonly) NSArray *editingFieldArrangement;

- (id)localizedPlaceholderForKey:(id)arg1;
- (id)initWithDisplayFieldArrangement:(id)arg1 editingFieldArrangement:(id)arg2 fieldLabelMap:(id)arg3;

@end
