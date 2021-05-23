/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSString;

@interface FPLocalizableStringLookup : NSObject

{
    NSBundle *_bundle;
    id _cfBundle;
    NSString *_tableName;
}

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) id cfBundle;
@property (copy, nonatomic) NSString *tableName;

- (id)localizedStringForKey:(id)arg1;

@end
