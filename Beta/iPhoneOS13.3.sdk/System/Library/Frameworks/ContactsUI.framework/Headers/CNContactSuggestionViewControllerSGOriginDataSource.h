/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString, NSURL, SGOrigin;

__attribute__((visibility("hidden")))
@interface CNContactSuggestionViewControllerSGOriginDataSource : NSObject

{
    SGOrigin *_origin;
}

@property (retain, nonatomic) SGOrigin *origin;
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

+ (id)dateFormatter;
+ (id)contactSuggestionTypeBySuggestionType;

- (id)initWithSGOrigin:(id)arg1;

@end
