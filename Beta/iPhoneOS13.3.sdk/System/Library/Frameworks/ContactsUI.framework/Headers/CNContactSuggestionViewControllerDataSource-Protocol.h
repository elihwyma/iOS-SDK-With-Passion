/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@class NSAttributedString, NSString, NSURL;

@protocol CNContactSuggestionViewControllerDataSource <Swift>

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSAttributedString *formattedSnippet;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *date;
@property (nonatomic, readonly) NSString *from;
@property (nonatomic, readonly) NSURL *url;

@end
