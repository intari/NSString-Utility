/*
 Erica Sadun, http://ericasadun.com
 iPhone Developer's Cookbook, 3.0 Edition
 BSD License, Use at your own risk
 */

#import <Foundation/Foundation.h>


@interface NSString (UtilityExtensions)
- (NSString *) stringByAppendingRandomStringOfRandomLength;
- (int) occurrencesOfString: (NSString *) aString;
- (NSDate *) date;
@property (readonly) NSString *trimmedString;
@property (readonly) NSDate *date;
@property (readonly) char *UTF8String; // a favorite!
@end
