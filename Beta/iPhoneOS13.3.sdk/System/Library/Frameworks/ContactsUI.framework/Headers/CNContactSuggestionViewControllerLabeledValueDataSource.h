/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNLabeledValue, NSAttributedString, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CNContactSuggestionViewControllerLabeledValueDataSource : NSObject

{
    CNLabeledValue *_labeledValue;
}

@property (retain, nonatomic) CNLabeledValue *labeledValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSAttributedString *formattedSnippet;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *date;
@property (nonatomic, readonly) NSString *from;
@property (nonatomic, readonly) NSURL *url;

- (id)initWithLabeledValue:(id)arg1;

@end
