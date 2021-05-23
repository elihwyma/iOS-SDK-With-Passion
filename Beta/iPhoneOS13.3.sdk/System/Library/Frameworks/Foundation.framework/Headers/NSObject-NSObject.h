/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@interface NSObject (NSObject)

+ (void)load;
+ (long long)version;
+ (_Bool)implementsSelector:(SEL)arg1;
+ (_Bool)instancesImplementSelector:(SEL)arg1;
+ (void)setVersion:(long long)arg1;

- (Class)classForCoder;
- (id)replacementObjectForCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (_Bool)_allowsDirectEncoding;
- (_Bool)implementsSelector:(SEL)arg1;

@end
