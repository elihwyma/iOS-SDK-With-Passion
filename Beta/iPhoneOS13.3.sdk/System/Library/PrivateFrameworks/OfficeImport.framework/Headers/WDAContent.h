/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, OADDrawable, WDAAnchor, WDATextBox;

__attribute__((visibility("hidden")))
@interface WDAContent : NSObject

{
    WDAAnchor *mAnchor;
    WDATextBox *mTextBox;
    OADDrawable *mDrawable;
    int mTextType;
}

@property (nonatomic, readonly) WDAAnchor *anchor;
@property (weak) OADDrawable *drawable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)classForType:(unsigned short)arg1;

- (id)init;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (_Bool)floating;
- (_Bool)hasText;
- (_Bool)hasBounds;
- (_Bool)isLinked;
- (void)clearAnchor;
- (_Bool)isShape;
- (id)textBox;
- (int)textType;
- (unsigned long long)linkedTextBoxSupport;
- (id)createAnchor;
- (id)createTextBoxWithDocument:(id)arg1 textType:(int)arg2;
- (void)setTextBox:(id)arg1 document:(id)arg2;
- (_Bool)isLine;
- (_Bool)isTopLevelObject;
- (void)setTextType:(int)arg1;

@end
