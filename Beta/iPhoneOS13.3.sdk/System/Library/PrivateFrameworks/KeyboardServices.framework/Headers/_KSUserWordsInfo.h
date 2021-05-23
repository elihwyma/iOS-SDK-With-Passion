/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSDate, _KSFileEntry;

@interface _KSUserWordsInfo : NSObject

{
    NSDate *_modifiedDate;
    unsigned long long _size;
    _KSFileEntry *_file;
}

+ (id)keyboardDirectory;
+ (id)keyNamesExcludingData;
+ (id)keyForData;
+ (id)filesForLanguage:(id)arg1;
+ (id)infoWithFiles:(id)arg1;
+ (id)infoWithRecord:(id)arg1;

- (id)description;
- (id)initWithRecord:(id)arg1;
- (id)initWithFiles:(id)arg1;
- (_Bool)isBetterThan:(id)arg1;
- (void)saveToRecord:(id)arg1;

@end
