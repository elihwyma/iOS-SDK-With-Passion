/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, RUIObjectModel;

@interface AKAppleIDObjectModelFieldExtractor : NSObject

{
    RUIObjectModel *_objectModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_valueForFieldWithID:(id)arg1 inObjectModel:(id)arg2;
- (id)_valueForTextFieldFromPage:(id)arg1 rowID:(id)arg2;
- (id)valueForFieldWithID:(id)arg1;
- (id)initWithObjectModel:(id)arg1;

@end
