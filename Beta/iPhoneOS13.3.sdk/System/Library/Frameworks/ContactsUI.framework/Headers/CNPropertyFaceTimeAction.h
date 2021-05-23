/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyAction.h>

@class CNPropertyBestIDSValueQuery;

__attribute__((visibility("hidden")))
@interface CNPropertyFaceTimeAction : CNPropertyAction

{
    long long _type;
    CNPropertyBestIDSValueQuery *_bestFaceTimeQuery;
}

@property (retain, nonatomic) CNPropertyBestIDSValueQuery *bestFaceTimeQuery;
@property (nonatomic) long long type;

- (void)dealloc;
- (_Bool)canPerformAction;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;
- (void)queryComplete;
- (void)_queryFaceTimeStatus;

@end
