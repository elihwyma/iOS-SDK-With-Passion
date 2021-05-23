/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCOfficeFontInfo : NSObject

{
    _Bool _isBold;
    _Bool _isItalic;
    NSString *_fullName;
}

@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) _Bool isBold;
@property (nonatomic, readonly) _Bool isItalic;

+ (id)officeFontInfoWithFullName:(id)arg1 isBold:(_Bool)arg2 isItalic:(_Bool)arg3;

- (id)description;
- (id)initWithFullName:(id)arg1 isBold:(_Bool)arg2 isItalic:(_Bool)arg3;
- (id)officeName;

@end
